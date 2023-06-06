/*Boxes through a tunnel*/

#include<stdio.h>
#include<stdlib.h>

#define MAX_HEIGHT 41

/*define the box structure*/
struct box {
    int length;
    int width;
    int height;
};

typedef struct box box;

/*return the volume of the box*/
int get_volume(box b) {
    return b.length*b.width*b.height;   
}

/*return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise*/
int is_lower_than_MAX_HEIGHT(box b) {
    if(b.height<MAX_HEIGHT) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter the number of boxes: ");
    scanf("%d", &n);
    box *boxes= malloc(n * sizeof(box));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the length, width, and height of the box separated by spaces: ");
        scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }
    for (int i = 0; i < n; i++)
    {
        if (is_lower_than_MAX_HEIGHT(boxes[i])) {
            printf("Volume of box %d is %d\n",i, get_volume(boxes[i]));
        }
        else
        {
            printf("Box %d is too tall\n", i);
        }
    }
    return 0;  
    
}