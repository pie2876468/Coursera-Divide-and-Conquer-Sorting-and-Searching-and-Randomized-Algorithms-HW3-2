#include <iostream>
#include <fstream>
using namespace std;
std::ifstream infile("IntegerArray.txt");

long long int QuickSort1(int *a, int start, int end, int pivotindex){
/*	for (int w = start;w<=end;w++){
	cout << a[w] << "  ";	
	}
	cout << endl;	
	cout << "   start :  " << start << "   end :  " << end << "   pivotindex :  " << pivotindex << endl; */
	int pivot = a[pivotindex];
	int i;
	int j;
	int tmp;
	int count = end-start;
//	cout << "count:  " << count << endl;
	if (start == end){
		return 0;
	}
/*
	else if ((end-start)==1){
		if(a[start]>a[end]){
			tmp = a[end];
			a[end]= a[start];
			a[start] = tmp;
		}
		return 1;
	}
//*/
	else if ((end-start)>=1){

	i = (start);// related to choosen pivot 
	for (j=(start);j<=(end-1);j++){// related to choosen pivot 
		//count++;
		if (a[j]<pivot){
			tmp = a[i];
			a[i]=a[j];
			a[j]=tmp;
			i++;
		}
	}
	tmp = a[i];// related to choosen pivot 
	a[i] = pivot;// related to choosen pivot 
	a[pivotindex] = tmp;
	
	long long int left;
	long long int right;
	
	int leftarrayrightedge;
	leftarrayrightedge = i-1;// related to choosen pivot 
	int rightarrayleftedge;
	rightarrayleftedge = i+1;// related to choosen pivot 
	if(leftarrayrightedge<=start){
		leftarrayrightedge = start;
	}
	if(rightarrayleftedge>=end){
		rightarrayleftedge = end;
	}
//	cout << "================================================" << endl;
//	cout << "Next Loop" << endl;
//	cout << "Left subarray" << endl;
//	cout << "   start :  " << start << "   end :  " << leftarrayrightedge << "   pivotindex :  " << leftarrayrightedge << endl;
  	left = QuickSort1(a,start,leftarrayrightedge,leftarrayrightedge);// related to choosen pivot 
//	cout << "Right subarray" << endl;
//	cout << "   start :  " << rightarrayleftedge << "   end :  " << end << "   pivotindex :  " << end << endl;
  	right = QuickSort1(a,rightarrayleftedge,end,end);// related to choosen pivot 

//	cout << "================================================" << endl;
//	left  =0;
//	right =0;
	return left+right+count;
	}
}

int main(){
//load file
	int in;
	int inputsize = 10000;
	int input[inputsize];
	int loadindex = 0;
	while (infile >> in){
    input[loadindex] = in;
    loadindex++;
	}
//load file end*/
// test case;

//  int d[100] = {4, 80, 70, 23, 9, 60, 68, 27, 66, 78, 12, 40, 52, 53, 44, 8, 49, 28, 18, 46, 21, 39, 51, 7, 87, 99, 69, 62, 84, 6, 79, 67, 14, 98, 83, 0, 96, 5, 82, 10, 26, 48, 3, 2, 15, 92, 11, 55, 63, 97, 43, 45, 81, 42, 95, 20, 25, 74, 24, 72, 91, 35, 86, 19, 75, 58, 71, 47, 76, 59, 64, 93, 17, 50, 56, 94, 90, 89, 32, 37, 34, 65, 1, 73, 41, 36, 57, 77, 30, 22, 13, 29, 38, 16, 88, 61, 31, 85, 33, 54};
//  int sd=100;
	int sd =9;
	int d[sd]= {9,8,4,6,10,2,5,7,3};

  long long int sumi = 0;
//  sumi =  QuickSort1(d,0,(sd-1),(sd-1));
//  inputsize=100;
  sumi =  QuickSort1(input,0,(inputsize-1),(inputsize-1)); // related to choosen pivot 

  cout <<"total comparisons :  " << sumi << endl;
/* 
  int i =0;
  while (i<sd){
  cout << d[i] << endl;
  i++;
}
//*/
/*
  int i =0;
  while (i<inputsize){
  cout << input[i] << "  ";
  i++;
}
//*/
return 0;
}
