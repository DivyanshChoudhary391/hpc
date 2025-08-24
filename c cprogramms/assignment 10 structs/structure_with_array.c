// Q3. Structure with Array

// Create a structure Book with members: title, author, price.
        
// Read details of 3 books.
// Print the details of the book with the  title, author, price. .

# include <stdio.h>

struct books{
    char title[20];
    char author[20];
    int price;
};

int main(){
    struct books book[3];

    for(int i=0;i<3;i++){
        printf("enter the title of the book\n");
        scanf("%s",book[i].title);
        printf("enter the autor of the book\n");
        scanf("%s",book[i].author);
        printf("enter the price of book\n");
        scanf("%d",&book[i].price);
    }

    printf("the details of 3 books are\n");
    
    for(int i=0;i<3;i++){
        printf("-------------------------\n");
        printf("title is:%s\n",book[i].title);
        printf("author is:%s\n",book[i].author);
        printf("price is:%d\n",book[i].price);
    }

    return 0;
}
