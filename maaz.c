  #include<stdio.h>
 int  main()
 {
     int i,j,a[50],n,temp,min;
     printf("enter no. of array elements \n");
     scanf("%d",&n);
     printf("enter elements \n");
     for (i=0;i<n;i++)
    {
     scanf("%d",&a[i]); 
    }
    printf("elements are ...");
    for (i=0;i<n;i++)
    {
     printf("%d \t",a[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
       {
        if (a[i]>a[j])
          {temp=a[i];
          a[i]=a[j];            //o(n^2)
          a[j]=temp;
          }
       }
    }
    printf("Sorted elements are ... \n");
    for (i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
 }