// 学习目标:结构体数组的创建和管理，数据遍历和搜索，菜单驱动操作
# include <stdio.h>
# define MAX_FRI_COUNTS 100
# define MAX_NAME_LENYH 50
# define MAX_INDUCTION 100

// 定义挚友结构体类型
typedef struct {
    char name[MAX_NAME_LENYH];
    int meeting_time; 
    char character[MAX_INDUCTION];
    char university[MAX_NAME_LENYH];
} bosom_friends;

// 声明挚友结构体数组
bosom_friends ge_mer[MAX_FRI_COUNTS];

// 声明函数
void menu();       // 控制整体页面
void add();        // 添加人员
void display();    // 展示成员信息
void reshape();    // 修改信息


// 主函数
int main()
{
    menu();
    return 0;
}


// 定义菜单
void menu()
{
    // 设置选项变量
    int choice;

    // 使用do~while语法来执行类菜单操作
    // 依据键入的数字来进行下一步操作
    do 
    {
        printf("菜单；\n");
        printf("1.添加哥们\n");
        printf("2.搜索哥们信息\n");
        printf("3.修改哥们信息\n");
        printf("键入0,退出程序\n");

        printf("---------------------------------------------------------------------------------------\n");
        
        printf("请键入您的选择：\n");
        scanf("%d",&choice);
        while (getchar() != '\n');
        switch(choice)
        {
            case (1) : add(); break;
            case (2) : display(); break;
            case (3) : reshape(); break;
        }
    }
    while (choice != 0);    
};

// 定义添加成员的函数实现逻辑
void add()
{
    int friend_counts = 0;
    // 当成员超出最大存储人数时，报错
    if (friend_counts > MAX_FRI_COUNTS)
    {
        printf("挚友人数已满，请重试\n");
    }

    bosom_friends *f = &ge_mer[friend_counts];
    
    printf("请输入添加人员代号：\n");
    scanf("%s",f->name);
    while (getchar() != '\n');

    printf("请输入添加人员的相遇时间：\n");
    scanf("%d",&f->meeting_time);
    while (getchar() != '\n');

    printf("请输入TA的大学:\n");
    scanf("%s",&f->university);
    while (getchar() != '\n');

    printf("请输入你对TA的评价:\n");
    scanf("%s",&f->character);
    while (getchar() != '\n');
    friend_counts += 1;
}

// 定义搜索成员并展示信息的逻辑
void display()
{   
    while (1) 
    {
        int i = 0;
        char search_name[MAX_NAME_LENYH];
        printf("输入您要修改的人的代号；\n");
        scanf("%s",search_name);

        if(search_name == ge_mer[i].name)
        {
            bosom_friends *s = &ge_mer[i];
            printf("您要找的哥们信息如下：\n");
            printf("代号:%s\t相会时间:%d\t当前就读大学:%s\n",s->name,s->meeting_time,s->university);
            printf("吐槽?还是评价吧,嘿嘿...:%s\n",s->character);
            printf("------------------------------------------------------------------------------\n");
            break;
        }
        else
        {
            i += 1;
        }

    // int i = 0;
    // char search_name[MAX_NAME_LENYH];
    // printf("输入您要查找的人的代号；\n");
    // scanf("%s",search_name);

    // for (i;search_name != ge_mer[i].name;i+=1)
    // {
    //     continue;
    // }
    // bosom_friends *s = &ge_mer[i];
    // printf("您要找的哥们信息如下：\n");
    // printf("代号:%s\t相会时间:%d\t当前就读大学:%s\n",s->name,s->meeting_time,s->university);
    // printf("吐槽?还是评价吧,嘿嘿...:%s",s->character);
    
}

// 定义修改数据信息的逻辑函数
void reshape();
{
    while (1) 
    {
        int i = 0;
        char search_name[MAX_NAME_LENYH];
        printf("输入您要修改的人的代号；\n");
        scanf("%s",search_name);

        if(search_name == ge_mer[i].name)
        {
            bosom_friends *s = &ge_mer[i];
            printf("您要找的哥们信息如下：\n");
            printf("代号:%s\t相会时间:%d\t当前就读大学:%s\n",s->name,s->meeting_time,s->university);
            printf("吐槽?还是评价吧,嘿嘿...:%s\n",s->character);

            printf("------------------------------------------------------------------------------\n");
                    
            scanf("%d %s %s",s->meeting_time,s->university,s->character);
            while (getchar() != '\n');

            break;
        }
        else
        {
            i += 1;
        }

    };
    
    
}