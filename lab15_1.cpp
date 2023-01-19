#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    if(N>1){
        insertionSort(d,N-1);
        T x[N];
        for(int i = 0; i < N; i++) x[i]=d[i];
        int i=0;
        while (i<N){
            if(d[N-1]>=d[i]){
                d[i]=d[N-1];
                break;
            }
            i++;
        }
        for(int j=i+1;j<N;j++){
            d[j]=x[j-1];
        }
        cout<<"Pass "<<N-1<<":";
        for(i = 0; i < 10; i++) cout<<d[i]<<' ';
        cout<<endl;
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
