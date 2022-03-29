#include <iostream>
#include <bits/stdc++.h>
using namespace std;
float vol(int,int);
float vol(float);
int vol(int,int,int);
float vol(int r,int h)
{
    return(3.142*r*h);
}
float vol(float r1)
{
    return((4*3.142*r1*r1*r1)/3);
}
int vol(int l,int w,int h)
{
    return(l*w*h);
}
int main(void)
{		while(true){
			cout<<"Volume Program."<<endl;
			cout<<"----------------"<<endl;
			cout<<"Choose one. \n";
			cout<<"1.Cylinder \n2.Sphere \n3.Cuboid \n";
			int ch;
			cin>>ch;
			if (ch==1)
			{	cout<<"Volume of a cylinder program."<<endl;
				cout<<"************************"<<endl;
				cout<<"Here we shall calculate the volume of a Cylinder : \n";
        		cout<<"Enter the radius : \n ";
        		int r,h;
				cin>>r;
        		cout<<"Enter the height : \n ";
        		cin>>h;
        		cout<<"Volume of cylinder is "<<vol(r,h);
   			}
   			else if(ch==2)
   			{	cout<<"Volume of a Sphere program."<<endl;
				cout<<"************************"<<endl;
				cout<<"Here we shall calculate the volume of a Sphere : \n";
        		cout<<"Enter the radius : \n ";
        		float r1;
				cin>>r1;
        		cout<<"\nVolume of sphere is "<<vol(r1);
			}
			else if(ch==3)
			{
				int w,l,h;
				cout<<"Volume of a Cuboid program."<<endl;
				cout<<"************************"<<endl;
				cout<<"Here we shall calculate the volume of a cuboid : \n";
        		cout<<"Enter the length : \n ";
        		cin>>l;
				cout<<"Enter the Width : \n";
        		cin>>w;
        		cout<<"Enter the height : \n";
        		cin>>h;
				cout<<"\nVolume of cuboid is "<<vol(l,w,h);	
			}
   			else
   				cout<<"Not Applicable .. ";
  return 0;
}
}
