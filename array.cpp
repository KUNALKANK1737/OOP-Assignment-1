//#include<iostream>
//using namespace std;
//int main(){
//	int array[5]={10,20,30,40,50};
//	cout<<array[2];
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int array[n];
//	for(int i=0;i<n;i++){
//		cin>>array[i];
//		
//	}
//	for(int i=0;i<n;i++){
//		cout<<array[i]<<" ";
//		
//	}
//	
//	
//	return 0;
//}
//#include<iostream>
//#include<climits>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int array[n];
//	for(int i=0;i<n;i++){
//		cin>>array[i];
//		
//	}
//	int max=INT_MIN;
//	int min=INT_MAX;
//	for(int i=0;i<n;i++){
//		if( array[i]>max){
//			max=array[i];
//			
//		}
//		if(array[i]<min){
//			min=array[i];
//		}
//	}
//	cout<<max<<"\n"<<min;
//	
//	
//	return 0;
////}
//#include<iostream>
//#include<climits>
//using namespace std;
//int linearsearch(int array[],int n,int key){
//	for(int i=0;i<n;i++){
//		if(array[i]==key){
//			return i;
//		}
//	}
//	return -1;
//}
//int main(){
//	int n;
//#include<iostream>
//using namespace std;
//int binarysearch(int arr[],int n,int key){
//	int s=0;
//	int e=n;
//	while(s<=e){
//		int mid=(s+e)/2;
//		if (arr[mid]==key){
//			return mid;
//			
//		}
//		else if (arr[mid]>key){
//			e=mid-1;
//			
//		}
//		else
//		{
//			s=mid+1;
//		}
//	}
//	return -1;
//}
//int main(){
//	int n;
//	cin>>n;
//	
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int key;
//	cin>>key;
//
//	cout<<binarysearch(arr,n,key);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//     	cin>>arr[i];
//	 }
//	 for(int i=0;i<n;i++){
//	 	for(int j=i+1;j<n;j++){
//	 		if (arr[j]<arr[i]){
//	 			int temp=arr[j];
//	 			arr[j]=arr[i];
//	 			arr[i]=temp;
//			 }
//	 		
//		 }
//	 }
//	 for(int i=0;i<n;i++){
//	 	cout<<arr[i]<<" ";
//	 	
//	 }
//	return 0;//
//}
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//     	cin>>arr[i];
//	 }
//	 int couter=1;
//	 while(couter<n){
//	 	for(int i=0;i<n-couter;i++){
//	 		if(arr[i]>arr[i+1]){
//	 			int temp=arr[i];
//	 			arr[i]=arr[i+1];
//	 			arr[i+1]=temp;
//	 			
//			 }
//		 }couter++;
//	 }
//	
//	return 0;}
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//     	cin>>arr[i];
//	 }
//	 for(int i=1;i<n;i++){
//	 	int current=arr[i];
//	 	int j=j-1;
//	 	while(arr[j]>current &&j>=0){
//	 		arr[j+1]=arr[j];
//	 		j--;
//	 		
//		 }
//		 arr[j+1]=current;
//		 
//	 }
//	for (int i=0;i<n;i++){
//     	cout<<arr[i]<<" ";
//	 }
//	return 0;}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int arr[n];
     for (int i=0;i<n;i++){
     	cin>>arr[i];
	 }
	 for(int i=1;i<n;i++){
	 	int current=arr[i];
	 	int j=j-1;
	 	while(arr[j]>current &&j>=0){
	 		arr[j+1]=arr[j];
	 		j--;
	 		
		 }
		 arr[j+1]=current;
		 
	 }
	for (int i=0;i<n;i++){
     	cout<<arr[i]<<" ";
	 }
	return 0;}

