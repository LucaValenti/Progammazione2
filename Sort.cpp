#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MyLibrary.cpp"

using namespace std;

template <class T> void riempimento(T v[], int n);
template <class T> void scambia(T v[], int i, int j);
template <class T> void print(T v[], int n);

template <class T>
void selectionSort(T v[], int n){
	for(int i=0; i<n; i++){
		int min = i;
		for(int j=i+1; j<n; j++)
			if(v[min] > v[j])
				min = j;
		scambia(v, i, min);
	}
}

template <class T>
void insertionSort(T v[], int n){
	int i, j;
	for(i=1; i<n; i++){
		j = i;
		while(j>0 && v[j-1] > v[j]){
			scambia(v, j, j-1);
			j--;
		}
	}
}

template <class T>
void naturalMerge(T v[], int low, int mid, int high){
	T b[high+1];
	int i = low;
	int j = low;
	int k = mid+1;
	while(i<=mid && k<=high){
		if(v[i] > v[k]) b[j++] = v[k++];
		else b[j++] = v[i++];
	}
	while(i<=mid) b[j++] = v[i++];
	while(k<=high) b[j++] = v[k++];
	for(int h=low; h<=high; h++)
		v[h] = b[h];
}

template <class T>
void mergeSort(T v[], int low, int high){
	if(low < high){
		int mid = (low+high)/2;
		mergeSort(v, low, mid);
		mergeSort(v, mid+1, high);
		naturalMerge(v, low, mid, high);
	}
}

template <class T>
int partition(T v[], int top, int bot){
	T x = v[top];
	int i = top-1;
	int j = bot+1;
	do{
		do j--;
		while(x < v[j]);
		do i++;
		while(x > v[i]);
		if(i<j) scambia(v, i, j);
	}while(i<j);
	return j;
}

template <class T>
void quickSort(T v[], int top, int bot){
	int mid;
	if(top < bot){
		mid = partition(v, top, bot);
		quickSort(v, top, mid);
		quickSort(v, mid+1, bot);
	}
}

int main(){
	srand(time(0));
	int n = 20;
	int v[n];
	
	riempimento(v, n);
	print(v, n);
	selectionSort(v, n);
	print(v, n);
	cout << endl;
	
	riempimento(v, n);
	print(v, n);
	insertionSort(v, n);
	print(v, n);
	cout << endl;
	
	riempimento(v, n);
	print(v, n);
	mergeSort(v, 0, n-1);
	print(v, n);
	cout << endl;
	
	riempimento(v, n);
	print(v, n);
	quickSort(v, 0, n-1);
	print(v, n);
}
