#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;
 

void rotateImg(vector<vector<int> > &A) {
    
     int N = A.size();
    int r = N >> 1;
     int c = (N + 1) >> 1;
     for (int i = 0; i < r; ++i) {
         for (int j = 0; j < c; ++j) {
             int tmp = A[i][j];
           A[i][j] = A[N - 1 - j][i];
          A[N - 1 - j][i] = A[N - 1 - i][N - 1 - j];
            A[N - 1 - i][N - 1 - j] = A[j][N - 1 - i];
            A[j][N - 1 - i] = tmp;
         }
      }
  
  }
  
bool isEqual(vector<vector<int> > A, vector<vector<int> > B) {
      int N = A.size();
      for (int i = 0; i < N; ++i) {
          for (int j = 0; j < N; ++j) {
              if (A[i][j] != B[i][j]) return false;
         }
    }
     return true;
  }
  
  vector<vector<int> > split(vector<vector<int> > A, int x, int y) {
      int N = A.size() >> 1;
      vector<vector<int> > v(N, vector<int>(N, 0));
      for (int i = 0; i < N; ++i) {
          for (int j = 0; j < N; ++j) {
              v[i][j] = A[i + x][j + y];
          }
      }
      return v;
  }
  
 bool isEncrypted(vector<vector<int> > A, vector<vector<int> > B) {
      int N = A.size();
      if (N == 1) return A[0][0] == B[0][0];
      if (N & 0x01) {
          vector<vector<int> > AA = A;
          for (int k = 0; k < 4; ++k) {
              if (isEqual(AA, B)) return true;
             rotateImg(AA);
          }
          return false;
     }
      else {
          int N_2 = N >> 1;
          vector<vector<int> > AA = A;
         int x[] = { 0, N_2, 0, N_2 };
          int y[] = { 0, 0, N_2, N_2 };
          for (int k = 0; k < 4; ++k) {
              bool flag = true;
              for (int kk = 0; kk < 4; ++kk) {
                  if (!isEncrypted(split(AA, x[kk], y[kk]), split(B, x[kk], y[kk]))) {
                      flag = false;
                      break;
                  }
              }
              if (flag) return true;
              rotateImg(AA);
          }
          return false;
      }
  }
  
  
 
  
  int main() {
      int T;
      scanf("%d", &T);
      while (T--) {
          int N;
          scanf("%d", &N);
          vector<vector<int> > A(N, vector<int>(N, 0));
          vector<vector<int> > B(N, vector<int>(N, 0));
         for (int i = 0; i < N; ++i) {
              for (int j = 0; j < N; ++j) {
                  int v;
                  scanf("%d", &v);
                  A[i][j] = v;
              }
          }
      
          for (int i = 0; i < N; ++i) {
              for (int j = 0; j < N; ++j) {
                  int v;
                  scanf("%d", &v);
                  B[i][j] = v;
             }
         }
 
         if (isEncrypted(A, B)) printf("Yes\n");
        else printf("No\n");
     }
 }
