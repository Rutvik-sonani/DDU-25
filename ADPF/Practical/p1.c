#include<stdio.h>

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
//         for(int f=1;f<=i;f++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// ****
// ***
// **
// *
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// *
// **
// ***
// ****
// *****
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


//     *
//    **
//   ***
//  ****
// *****
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
//         for(int f=1;f<=i;f++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// ****
//   ***
//    **
//     *
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(int f=1;f<=5-i;f++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//     * * * * * 
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
//         for(int f=1;f<=5;f++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// * * * * 
//   * * *
//    * *
//     *
// void main(){
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<i;j++){
//             printf(" ");
//         }
//         for(int f=0;f<=5-i;f++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     * 
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
//         for(int f=1;f<=i;f++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(int f=1;f<=5-i;f++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// * * * * 
//   * * *
//    * *
//     *
//     *
//    * *
//   * * *
//  * * * * 
// * * * * *
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(int f=1;f<=5-i;f++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
//         for(int f=1;f<=i;f++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// * * * * * * 
// *         *
// *         *
// *         *
// *         *
// * * * * * *
// void main(){
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<=5;j++){
//             if(i==0 || i==5 || j==0 || j==5){
//                 printf("* ");
//             }else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// * * * * * * * * * * * 
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *
// void main(){
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<i;j++){
//             printf("  ");
//         }
//         for(int f=0;f<=(5-i)*2;f++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//       * 
//      * *
//     *   *
//    *     *
//   *       *
//  * * * * * *
// void main(){
//     for(int i=0;i<=5;i++){
//         for(int f=0;f<=5-i;f++){
//             printf(" ");
//         }
//         for(int j=0;j<=i;j++){
//             if(j==0 || j==i || i==5){
//                printf("* "); 
//             }else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }