// Array elements playing
#include<bits/stdc++.h>
using namespace std;
bool searchEle(int a[],int x);
bool insertEle(int a[],int y,int yi);
bool deleteEle(int a[],int z);
int arr_size(int a[]);

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,size_arr;
		cin>>n;
		
		int a[10000];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x,y,yi,z;
		cin>>x>>y>>yi>>z;
		bool b=searchEle(a,x);
		if(b==true)
			cout<<"1 ";
		else
			cout<<"0 ";
		b=insertEle(a,y,yi);
		if(b){
		if(a[yi]==y)
			cout<<"1 ";
		else
			cout<<"0 ";
		}
		else
			cout<<"0 ";
		b=deleteEle(a,z);
		if(b){
		if(!searchEle(a,z))
			cout<<"1 \n";
		else
			cout<<"0 \n";
		}
		else
			cout<<"0 \n";
	}
}// } Driver Code Ends


int arr_size(int a[]) {
    int count=0,i=0;
    while(a[i] != -1) {
        count ++ ;
        i++;
    }
    return count;
}

bool searchEle(int a[],int x)
{
    int size = arr_size(a);
    
    for(int i=0;i<size;i++) {
        if(a[i] == x) 
            return 1;
    }
    return 0;
}
bool insertEle(int a[],int y,int yi)
{
    int temp,temp1,i;
    int size = arr_size(a);
    if(yi > (size-1) && yi < 0) {
        return 0;
    }
    for(i=yi;i < (size);i++) {// check condition
		if(i == yi) {
            temp = a[i];
            a[i] = y;
            temp1 = a[i+1]; 
            a[i+1] = temp;
        }
        else {
            temp = a[i+1];
            a[i+1] = temp1;
            temp1 = temp;
        }
    }
    return 1;
}
bool deleteEle(int a[],int z)
{
    int size = arr_size(a);
    int flag = 0;
    for(int i=0;i<size;i++) {
        if(z == a[i]) {
            z=i; 
            flag =1;
            break;
        }
    }
    for(int i=z;i<size-1;i++) {
        a[i] = a[i+1];
    }
    if(flag == 1)
        return 1;
}