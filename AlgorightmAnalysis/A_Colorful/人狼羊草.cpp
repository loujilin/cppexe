#include<iostream>
using namespace std;

int man(int n){
    return (0!=(n & 8));// 判断农夫在不在，如果返回1，则表示农夫在。
}
int wolf(int n){
    return (0!=(n & 4));
}
int sheep(int n){
    return (0!=(n & 2));
}
int grass(int n){
    return (0!=(n & 1));
}
//安全检验
int isSafe(int n){
    if(sheep(n)==grass(n) && sheep(n)!=man(n)) return 0;
    if(sheep(n)==wolf(n) && wolf(n)!=man(n)) return 0;
    return 1;//1表示安全，0表示不安全
}
//过河，使用广度优深算法遍历
int crossRiver(int result[]){
    int Status,nextStatus,choice[]={8,9,10,12};//农夫从某一状态出发，有4种走法
    int queue[16],front,rear;//定义循环队列
    int i,j,visited[16];//visited[i]=0表示i未访问过
    int route[16];//route[i]表示第i步的前一步，意即往第i步走的方式
    rear=front=0;//队列初始化
    for(i=0;i<16;i++){
        route[i]=-1;
        visited[i]=0;
    }
    Status=0;nextStatus=-1; //从状态0（全部在南岸）开始
    queue[rear]=Status; rear=(rear+1)%16;//入队
    while(front!=rear){
        Status=queue[front];front=(front+1)%16;//出队

        visited[Status]=1;  //访问
        for(j=0;j<4;j++){
            nextStatus=Status^choice[j]; //从curStatus状态到下一状态nextStatus
            if(visited[nextStatus]==0 && isSafe(nextStatus)){
                queue[rear]=nextStatus; rear=(rear+1)%16;//入队
                route[nextStatus]=Status;//仅表示从Sattus可以走到nextStatus
                //如route[10]=0,意即从0000有路可走到1010
            }
        }
    }
    //处理路径表:从路径表中反推（从最终步-->开始步）
    i=15;//最后一步
    if(route[i]==-1) { //若没有方法可以走到1111，则任务失败。
        cout<<"过河失败!"<<endl;
        return 0;
    }
    for(j=15;route[i]!=-1 && i>=0;j--){ //route[i]!=-1相当于那一步走不通，那就不用选取了
        result[j]=i;
        i=route[i];
    }
    result[j]=i;  //第一步
    return 1;
}

int main(){
    int i,j,result[16]; //存结果序列
    //16种状态（0000-->1111）对应的文字提示
    char name[16][20]={"人狼羊草\t\t空",   "人狼羊\t\t\t草",
                       "人狼草\t\t\t羊",      "人狼\t\t\t羊草",
                       "人羊草\t\t\t狼",      "人羊\t\t\t狼草",
                       "人草\t\t\t狼羊",    "人\t\t\t狼羊草",
                       "狼羊草\t\t人",      "狼羊\t\t\t人草",
                       "狼草\t\t\t人羊",      "狼\t\t\t人羊草",
                       "羊草\t\t\t人狼",    "羊\t\t\t人狼草",
                       "草\t\t\t人狼羊",    "空\t\t\t人狼羊草"};
    for(i=0;i<16;i++)result[i]=-1;//初始化结果序列
    if(crossRiver(result)==0) return 0;
    //输出结果
    cout<<"步骤\t南岸\t\t\t北岸"<<endl;
    cout<<"---------------------------------------------"<<endl;
    for(i=0,j=0;j<16;j++){
        if(result[j]>=0){
            cout<<"第"<<i<<"步:\t"<<name[result[j]]<<endl;
            i++;

        }
    }
    return 0;
}
