#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
int x[]={3,7,4,9,12,6,1,11,2,10};
int length=sizeof(x)/sizeof(x[0]);
vector<int> answers;

printf("Question is: Find_a_multple_missing_element_in_a_unsorted_array\n");

printf("Approach 2nd: Time O(n * log n) Space O(1)\n");

sort(x,x+length);

int difference=x[0]-0;

for(int i=0;i<length;i++)
{
if(x[i]-i!=difference)
{
while(x[i]-i>difference)
{
answers.push_back(i+difference);
difference++;
}
}
}

for(auto elem: answers)
{
cout<<elem<<" ";
}
cout<<endl;

return 0;
}
