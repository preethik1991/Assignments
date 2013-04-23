
// Program to implement basic operations for Xen VM using libvirt API

#include <stdio.h>
#include <stdlib.h>
#include <libvirt/libvirt.h>

int main(int argc, char *argv[])
{
    virConnectPtr connection;
    virDomainPtr virtdomptr;
    int x=-1,choice;     
    char *host;
    connection = virConnectOpen("xen:///");
    if (connection == NULL) {
        fprintf(stderr, "Failed to open connection to xen:///\n");
        return 1;
    }
    //host = virConnectGetHostname(connection);

    virdomptr=virDomainLookupByName(conn,"ubuntu");
    printf("\n 1.Start \n 2.Suspend\n 3.Resume \n 4.Shutdown\n");

    printf("Enter your choice: 1. Start 2.Suspend 3.Resume 4.Shut Down\n");
    scanf("%d",&choice);

    if(choice==1) {
      //for Starting the virtual domain
        x=virDomainCreate(virdomptr);
        if(x==0)
        {
            printf("Success\n");
        }else{
            printf("Failed\n");
        }
    }


    else if(choice==2) {

        // for suspending the virtual domain	    
        x=virDomainSuspend(virdomptr);
        if(x==0)
        {
            printf("Success\n");
        }else{
            printf("Failed\n");	
        }
    }


    else if(choice==3) {

        //for resuming the virtual domain
        x=virDomainResume(vdp);
        if(i==0)
        {	
            printf("Success\n");
        }else{
            printf("Failed\n");	
        }
    }

    else {

        //for shutting down the virtual domain
        x=virDomainDestroy(vdp);
        if(x==0)
        {
            printf("Success\n");
        }else{
            printf("Failed\n");	
        }
    }        



    virConnectClose(connection);
    return 0;
}
}
