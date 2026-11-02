#include <stdio.h>
int parent[20];
int find(int x)
{
    while(parent[x] != x)
        x = parent[x];

    return x;
}
void unionSet(int a, int b)
{
    int rootA = find(a);
    int rootB = find(b);

    if(rootA != rootB)
        parent[rootB] = rootA;
}
int main()
{
    int n, i, a, b;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        parent[i] = i;
    printf("Enter two elements to union: ");
    scanf("%d %d", &a, &b);
    unionSet(a, b);
    printf("Find %d = %d\n", a, find(a));
    printf("Find %d = %d\n", b, find(b));
    return 0;
}
