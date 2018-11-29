#include<bits/stdc++.h>
using namespace std;
void MaxAndMin()  
{  
    int maxI = 3;  
    int maxJ = 4;  
    cout << "�ϴ�ֵΪ��" << max(maxI,maxJ) << endl;  
    cout << "��СֵΪ��" << min(maxI,maxJ) << endl;  
}

void PrintVector(vector<int> v)  
{  
    vector<int>::iterator vIterator;  
    for (vIterator = v.begin(); vIterator != v.end(); vIterator++)  
    {  
        cout << *vIterator << " ";  
    }  
    cout << endl;  
}

void SortAndReverse()  
{  
    vector<int> myVector;  
    myVector.push_back(2);  
    myVector.push_back(9);  
    myVector.push_back(1);  
    myVector.push_back(0);  
    myVector.push_back(7);  
  
    cout << "����ǰ�����У�";  
    PrintVector(myVector);  
  
    sort(myVector.begin(), myVector.end());  
    cout << "�������������У�";  
    PrintVector(myVector);  
  
    reverse(myVector.begin(), myVector.end());  
    cout << "�������������У�";  
    PrintVector(myVector);  
}

void FindVector()  
{  
    vector<int> myVector;  
    myVector.push_back(2);  
    myVector.push_back(4);  
    myVector.push_back(6);  
    myVector.push_back(8);  
    myVector.push_back(0);  
  
    vector<int>::iterator vIterator;  
    vIterator = find(myVector.begin(), myVector.end(), 16);  
    if (vIterator == myVector.end())  
    {  
        cout << "δ�ҵ�" << endl;  
    }  
    else  
    {  
        cout << "�ҵ���" << *vIterator << endl;  
    }  
}

void EqualVector()  
{  
    vector<int> myVector1;  
    myVector1.push_back(1);  
    myVector1.push_back(5);  
    myVector1.push_back(7);  
    myVector1.push_back(9);  
  
    vector<int> myVector2;  
    myVector2.push_back(1);  
    myVector2.push_back(5);  
    myVector2.push_back(7);  
    myVector2.push_back(9);  
  
    bool isEqual = equal(myVector1.begin(), myVector1.end(), myVector2.begin());  
    if (isEqual)  
    {  
        cout << "���" << endl;  
    }  
    else  
    {  
        cout << "�����" << endl;  
    }  
}

void MergeVector()  
{  
    vector<int> myVector1;  
    myVector1.push_back(1);  
    myVector1.push_back(5);  
    myVector1.push_back(7);  
    myVector1.push_back(9);  
  
    vector<int> myVector2;  
    myVector2.push_back(2);  
    myVector2.push_back(3);  
    myVector2.push_back(4);  
    myVector2.push_back(5);  
  
    // ��Ҫ�ںϲ�ǰ����  
    sort(myVector1.begin(), myVector1.end());  
    sort(myVector2.begin(), myVector2.end());  
  
    // ��Ҫָ��������Ĵ�С  
    vector<int> myResult(8);  
    merge(myVector1.begin(), myVector1.end(), myVector2.begin(), myVector2.end(), myResult.begin());  
  
    cout << "�ϲ��������Ϊ��";  
    PrintVector(myResult);  
}

void SwapObject()  
{  
    int i = 2;  
    int j = 3;  
    cout << "����֮ǰ��������ֵ��";  
    cout << "i = " << i << ";j = " << j << endl;  
    swap(i, j);  
    cout << "����֮����������ֵ��";  
    cout << "i = " << i << ";j = " << j << endl;  
}

// ȥ�صĲ�����sort-->unique-->erase  
// vector������������г�ʼ��  
void UniqueVector()  
{  
    int array[] = {5, 3, 1, 3, 2, 5};  
    vector<int> vectorFromArray(array, array + sizeof(array) / sizeof(int));  
  
    sort(vectorFromArray.begin(), vectorFromArray.end());  
    vector<int>::iterator iter = unique(vectorFromArray.begin(), vectorFromArray.end());  
    vectorFromArray.erase(iter, vectorFromArray.end());  
  
    cout << "ȥ��֮������У�";  
    PrintVector(vectorFromArray);  
}

void ReplaceVector()  
{  
    int array[] = {2, 4, 6, 8, 9};  
    vector<int> myVector(array, array + sizeof(array) / sizeof(int));  
  
    cout << "�滻֮ǰ�����У�";  
    PrintVector(myVector);  
    replace(myVector.begin(), myVector.end(), 8, 888);  
    cout << "�滻֮������У�";  
    PrintVector(myVector);  
}

// ɾ��������ȥ�ز��������Ƶģ�ʵ��ʹ��remove��ʱ�򣬲�û��ɾ���Ǹ�Ԫ�أ������ú�����Ǹ�  
// Ԫ���������Ҫɾ����Ԫ�ء����Ҫʹ��erase����ɾ����  
// ����ֻ��ɾ����һ�γ��ֵ��Ǹ����֣����ڶ���Ԫ�ز���ɾ����  
void RemoveVector()  
{  
    int array[] = {1, 2, 3, 4, 5};  
    vector<int> myVector(array, array + sizeof(array) / sizeof(int));  
  
    cout << "ɾ��Ԫ��ǰ�����У�";  
    PrintVector(myVector);  
  
    vector<int>::iterator Iter = remove(myVector.begin(), myVector.end(), 4);  
    myVector.erase(Iter);  
  
    cout << "ɾ��Ԫ��ǰ�����У�";  
    PrintVector(myVector);  
}

void CountVector()  
{  
    int array[] = {4, 4, 6, 9, 0, 0, 0,9,0,0,0,0,9};  
    vector<int> myVector(array, array + sizeof(array) / sizeof(int));  
  
    // ����Ĭ�Ϸ��ص���long  
    long num = count(myVector.begin(), myVector.end(), 0);  
    cout << "ĳ��ֵ���ֵĴ���Ϊ��" << num << endl;  
}

void CopyVector()  
{  
    int arr[] = {2, 3, 4, 5, 6};  
    vector<int> myVector(arr, arr + sizeof(arr) / sizeof(int));  
  
    // ������Ҫָ����С  
    vector<int> myVectorCopy(5);  
  
    copy(myVector.begin(), myVector.end(), myVectorCopy.begin());  
    cout << "�����������Ϊ��";  
    PrintVector(myVectorCopy);  
}

void GenerateVector()  
{  
    vector<int> myVector(5);  
    generate(myVector.begin(), myVector.end(), rand);  
    cout << "���ɵ��������Ϊ��";  
    PrintVector(myVector);  
}

//void MoveVector()  
//{  
//    int arr[] = {4, 6, 8, 2, 0};  
//    vector<int> myVector(arr, arr + sizeof(arr) / sizeof(int));  
//  
//    vector<int> myVectorMove(11); // ��ʼֵΪ0  
//    move(myVector.begin(), myVector.end(), myVectorMove.begin() + 5);  
//    cout << "�ƶ��������Ϊ��";  
//    PrintVector(myVectorMove);  
//}

/** 
 *  vector�ĳ�ʼ��������array��Ҳ����ֱ����{}. 
 */  
void FillVector()  
{  
	int array[] = {3, 4, 5, 6, 7};
    vector<int> myVector(array, array + sizeof(array) / sizeof(int)); 
  
    cout << "��ʼ������Ϊ��";  
    PrintVector(myVector);  
    // ����ȫ�����Ϊ**  
    fill(myVector.begin(), myVector.end(), 99);  
    cout << "���������Ϊ��";  
    PrintVector(myVector);  
}

// rorate������[first, middle)�ڵ�Ԫ�غ�[middle, last)�ڵ�Ԫ�ػ�����middle��ָԪ�س�Ϊ�����ĵ�һ��Ԫ�ء�  
void RotateVector()  
{  
	int array[] = {4, 5, 0, 1, 9};
    vector<int> myVector(array, array + sizeof(array) / sizeof(int));
  
    cout << "��תǰ������Ϊ��";  
    PrintVector(myVector);  
    rotate(myVector.begin(), myVector.begin() + 3, myVector.end());  
    cout << "��ת�������Ϊ��";  
    PrintVector(myVector);  
}

// ���ڶѵĲ���  
void Heap()  
{  
    int arr[] = {3, 7, 9, 1, 0, 6};  
    vector<int> myVector(arr, arr + sizeof(arr) / sizeof(int));  
  
    // ����һ������,����������lessΪ���ѣ�greaterΪ��С�ѣ�Ĭ��Ϊ���ѣ�  
    make_heap(myVector.begin(), myVector.end(),less<int>());  
    PrintVector(myVector);  
  
    // �����һ��Ԫ����ĩβ��Ȼ�����µ�������Ҳ���ǰ�Ԫ������ڵײ�vector��end����  
    // Ҫ���������м������ݣ��ٵ���push_heap;  
    myVector.push_back(99);  
    push_heap(myVector.begin(), myVector.end());  
    PrintVector(myVector);  
  
    // �ѶѶ�Ԫ��ȡ�������ŵ����������vector��ĩβ����ԭ��ĩβԪ��ȥ�����  
    // Ҫ�ȵ���pop_heap,�ٵ�������ɾ�����ݣ�  
    pop_heap(myVector.begin(), myVector.end());  
    myVector.pop_back();  
    PrintVector(myVector);  
  
    // ����֮��Ͳ���һ���Ϸ��Ķ���  
    sort_heap(myVector.begin(), myVector.end());  
    PrintVector(myVector);  
}
int main(){
	MaxAndMin();
	cout<<endl;
	SortAndReverse();
	cout<<endl;
	FindVector();
	cout<<endl;
	EqualVector();
	cout<<endl;
	MergeVector();
	cout<<endl;
	SwapObject();
	cout<<endl;
	UniqueVector();
	cout<<endl;
	ReplaceVector();
	cout<<endl;
	RemoveVector();
	cout<<endl;
//	ForEach();
	cout<<endl;
	CountVector();
	cout<<endl;
	CopyVector();
	cout<<endl;
	GenerateVector();
	cout<<endl;
//	MoveVector();
	cout<<endl;
	FillVector();
	cout<<endl;
	RotateVector();
	cout<<endl;
	Heap();
	cout<<endl;
	return 0;
}
