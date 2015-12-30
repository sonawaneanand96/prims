#include<iostream>
using namespace std;

#define row 10
#define infi 1000
class prim{
	int matrix[row][row],nodes;
	public:
		prim();
		void accept_values();
		void minimum_path();
};

prim :: prim(){
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			matrix[i][j]=0;
		}
	}
}	

void prim::accept_values(){
	int i,j;
	cout<<"Enter number of nodes: ";
	cin>>nodes;
	cout<<"Enter cost matrix: "<<endl;
	for( i=0;i<nodes;i++){
		for(j=0;j<nodes;j++){
			cin>>matrix[i][j];
		}
	}
	cout<<"a";		
	for(i=0;i<nodes;i++){
		for(j=0;j<nodes;j++){
			if(matrix[i][j]==0)
				matrix[i][j]=infi;
		}
	}
}

void prim::minimum_path(){
	int selected[row];
	int x,y,visited=1,min;
	for(int i=0;i<nodes;i++)
		selected[i]=false;
	selected[0]=true;
	while(visited < nodes){
		min=infi;
		cout<<"a";
		for(int i=0;i<nodes;i++){
		if(selected[i]=true){
			for(int j=0;j<nodes;j++){
			if(selected[j]=false){
				if(min>matrix[i][j]){
					min=matrix[i][j];
					x=i;
					y=j;
				}
			}
			}
		}
		}
		selected[y]=true;
		cout<<"\n"<<x+1<<" --> "<<y+1<<" : "<<matrix[x][y];
       		visited=visited+1;
       	}
}       		
						
int main(){
	prim mst;
	cout<<"\nPrims Algorithm to find Minimum Spanning Tree\n";
	mst.accept_values();
	mst.minimum_path();
	return 0;
}	

