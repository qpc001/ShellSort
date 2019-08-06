#include <iostream>

using namespace std;

void ShellSort(int* arr,int len){
    int tmp,gap=len/2;
    while(gap>0){
        //对每一分组进行操作
        for(int i=0;i<gap;i++){
            //初始时，假定第0个元素是排序完的,则取第一个元素开始
            for(int j=i+gap;j<len;j+=gap){
                int tmp=arr[j];
                int k;
                //与已经排好序的进行比较
                //如果小于已经排好序的序列最后一个元素，则交换，否则，不交换（相当于将本元素插到排好序的数列末端）
                for(k=j-gap;k>=0&&tmp<arr[k];k-=gap){
                    arr[k+gap]=arr[k];
                }
                arr[k+gap]=tmp;
            }
        }
        gap/=2;
    }
}


int main()
{
    int kk[]={19,29,30,1,20,0,2,5,87,6};

    int len=10;

    ShellSort(kk,len);

    for(int i=0;i<10;i++)
    printf("%d ",kk[i]);
    return 0;
}
