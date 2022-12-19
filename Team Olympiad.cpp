#include<iostream>
using namespace std;
int main(){
	int n,number,count[3]={0},arr[3][5001],num_of_teams;
	cin>>n;
	for (int id=1;id<=n;id++){
		cin>>number;
		number--;
		count[number]++;
		arr[number][count[number]]=id;
	}
	num_of_teams=min(min(count[0],count[1]),count[2]);
	cout<<num_of_teams<<endl;
	for(int i=1;i<=num_of_teams;i++){
		cout<<arr[0][i]<< " "<<arr[1][i]<< " "<<arr[2][i]<<endl;
		
	}
}
