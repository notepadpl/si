
#include <iostream>
#include <winsock2.h>
/* all rights reserved*/
 #include<stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <string.h>
#include <fcntl.h>
 #include<iostream>
#include<stdio.h>                // printf
#include<string.h>                // strlen
#include<string>                // string
        // inet_addr
using namespace std;
struct sockaddr_in server;
#define DO 0xfd
#define WONT 0xfc
#define WILL 0xfb
#define DONT 0xfe
#define CMD 0xff
#define CMD_ECHO 1
#define CMD_WINDOW_SIZE 31
#define BUFLEN 20
int len;

 char * buf;


int hostname_to_ip(char * hostname , char* ip)
{
    struct hostent *he;
    struct in_addr **addr_list;
    int i;
        
    if ( (he = gethostbyname( hostname ) ) == NULL)
    {
        // get the host info
     
        return 1;
    }

    addr_list = (struct in_addr **) he->h_addr_list;
    
    for(i = 0; addr_list[i] != NULL; i++)
    {
    	
        //Return the first one;
        strcpy(ip , inet_ntoa(*addr_list[i]) );
        return 0;
    }
    
    return 1;
}


/**********THIS IS REQUEST FOR FACEBOOK*/
/********** FACEBOOK BLUE CABLE **********/
    struct options{
string s={"OPTIONS "};
string p;
//string p={"https://m.facebook.com/zuck?__xts__ "};
string d={"Date: Mon, 1 January 0000  00:00:00 GMT \r\n\n"};
string k={" HTTP/1.1\r\nUser-Agent: Chrome () { ; : }; \r\n\n"};
string sip;     
    }o;
    struct put{
          string rn={"\r\n"};
string s={"PUT /"};
string p={"/webhp"};
string k={" HTTP/1.1\r\nUser-Agent: Chrome\r\n\n"};
string u={"User-Agent: Mozilla \r\n\n"};
//k=k+rn;
string sip;
      }pt;
      /************ for google RED CABLE **********/
    struct get{
string s={"GET /"};
string p={"/webhp"};
string k={" HTTP/1.1\r\nUser-Agent: Chrome\r\n\n"};
string u={"User-Agent: Mozilla \r\n\n"};
string sip;     
    }g; 
      struct head{
          string rn={"\r\n"};
string s={"HEAD "};
string p;
string k={" HTTP/1.1\r\nUser-Agent: Chrome\r\n\n"};
string u={"User-Agent: Mozilla \r\n\n"};
string sip;    
    }h;
    /*not working yet*/
         struct post{
string a ={""};
string b = {"POST //sdcard/test.html HTTP/1.1\r\n"};
string c = {"Host: facebook.com\r\n"};
string down ={"User-Agent: () { ; : };\r\n"};
string e = {"Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n"};
string f = {"Accept-Language: en-US,en;q=0.5\r\n"};
string g = {"Accept-Encoding: gzip, deflate\r\n"};
string h = {"DNT: 1\r\n"};
string i = {"Referer: http://m.facebook.com/zuck\r\n"};
string j = {"Cookie: \r\n"};
string k = {"Connection: close\r\n"};
string l = {"Content-Type: application/x-www-form-urlencoded\r\n"};
string m = {"Content-Length: 30\r\n"};
string sip;
string omg = {"username=zurfyx&pass=password\r\n\n"};
         }c;

int main(int argc, char *argv[])
{ 
    char *hostname = argv[1];
    char ip[100];
      WSADATA WSAData;
    SOCKET sock;
    SOCKADDR_IN addr;
 
    WSAStartup(MAKEWORD(2,0), &WSAData);
    sock = socket(AF_INET, SOCK_STREAM, 0);
    hostname_to_ip(hostname , ip);
    printf("%s resolved to %s" , hostname , ip);
  
    server.sin_family = AF_INET;  
         if (argc < 2 ) {
   //    server.sin_addr.s_addr = inet_addr("216.58.207.46"); //google.com
       server.sin_addr.s_addr = inet_addr("185.60.216.35");//facebook   
       argv[1]="185.60.216.35";
    }
    else{
       server.sin_addr.s_addr = inet_addr(ip);   
    }
    int port = 80;
    if (argc == 3) {
        port = atoi(argv[2]); }
        if (argc == 4)
        {   
      
        }
 server.sin_port = htons(port);
          connect(sock, (struct sockaddr *)&server, sizeof(server));        
             struct timeval ts;
    ts.tv_sec = 1; // 1 second
    ts.tv_usec = 0;
    ssize_t numBytesRecv = 10;
      char replyMessage[520];
         char *replyMessage2[5200];
 FILE *fp;
  if ((fp=fopen("test2.html", "w"))==NULL) {
    printf ("can't open file to write\n");
    exit(1); };
  ///  ########################    ///
    /*facebook*/
  //dlugi.info  94.152.142.227
    printf("port is: %d\n", port);
    printf("host ip is %s\n", argv[1]);
    printf("enter the , exemple: /zuck\n");
cin>> o.p;
  o.sip=o.s+o.p+o.k+o.d;
  cout<<o.sip<<endl;
  /*google*/
//  cin>> g.p;
  g.sip=g.s+g.p+g.k;
  cout<<g.sip<<endl;
  c.sip=c.b+c.c+c.down+c.e+c.f+c.g+c.h+c.i+c.j+c.k+c.l+c.m+c.omg;

if (port==80){
 send(sock, o.sip.c_str(), sizeof (o.sip)+255 ,0);
do
    {     
       numBytesRecv = recv(sock, replyMessage, strlen (replyMessage)+255, 0);
printf("%s\n", replyMessage);
 fprintf (fp, "%s\n", replyMessage);
  memset(&replyMessage, 0, sizeof(replyMessage));


    }   while (numBytesRecv>0);
}
    else {
     while (1) {
//terminal_set();
  
      fd_set fds;
        FD_ZERO(&fds);
        if (sock != 0)
            FD_SET(sock, &fds);
        FD_SET(0, &fds);
        // wait for data
        int nready = select(sock + 1, &fds, (fd_set *) 0, (fd_set *) 0, &ts);
    
            int rv;
            if ((rv = recv(sock , buf , 1 , 0)) < 0){     
                return 1;}
            else if (rv == 0) {     
                printf("Connection closed by the remote end\n\r");
                return 0;
            }
            if (buf[0] == CMD) {
                // read 2 more bytes
                len = recv(sock , buf + 1 , 2 , 0);
                if (len  < 0){
                    return 1;}
                else if (len == 0) {     
                    printf("Connection closed by the remote end\n\r");
                    return 0;
                }
         
            }
            else {
                len = 1;
                buf[len] = '\0';
                printf("%s", buf);
                   fprintf(fp,"%s", buf);
                fflush(0);
            }
             
         if (FD_ISSET(0, &fds)) {
            buf[0] = getc(stdin); //fgets(buf, 1, stdin);
            if (send(sock, buf, 1, 0) < 0)
                return 1;
            if (buf[0] == '\n') // with the terminal in raw mode we need to force a LF           
                 putchar('\r');
        }     
      
     }
    }
    printf("save in test2.html file\n");
       fclose (fp);   
     }
