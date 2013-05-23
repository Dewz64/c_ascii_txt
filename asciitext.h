
/**
 * @Author Pasindu De Silav
 * @license  GNU Affero General Public License http://www.gnu.org/licenses/ 
 * Email : ghosteyes17@ymail.com
 * 
 * This is a Ascii Text Generator For C
 * 
 * You can use the normal texxt font with normaltext method
 * If you need to you can put our own fonts
 */
       
  int lines=0;
      
      /* This is where every thing important happens.
         The fulltoken of the letter is taken and in each line.
         It is explode using the coma ( , ) sign.
       */
       pro(char lett[]){
      
         
              char * pch;
              int one =1;
              pch = strtok (lett,",");
            
                  while (pch != NULL)
                  {
                        if (lines==one){    
                           printf ("%s",pch);
                           break;
                        }
                        pch = strtok (NULL, ",");
                        one++;
                  }

       }
       
       
       let(char lett[]){
       
       
    
         char p[]="       ,       , ____  ,|  _ \\ ,| |_| |,|  __/ ,|_|    ,";
        
         char s[]="      ,      ,  ___ , /___),|___ |,(___/ ,      ,";
        
        
        
         char u[]="       ,       , _   _ ,| | | |,| |_| |,|____/ ,       ,";
        

    
    if(lett[0]>=97 && lett[0]<=107){
         char a[]="       ,       , _____ ,(____ |,/ ___ |,\\_____|,       ,"; 
         char b[]=" _     ,| |    ,| |__  ,|  _ \\ ,| |_) ),|____/ ,";
         char c[]="       ,       ,  ____ , / ___),( (___ , \\____),       ,";
         char d[]="     _ ,    | |,  __| |, / _  |,( (_| |, \\____|,       ,";
         char e[]="       ,       , _____ ,| ___ |,| ____|,|_____),       ,";
         char f[]="    ___ ,   / __), _| |__ ,(_   __),  | |   ,  |_|   ,        ,";
         char g[]="       ,  ____ , / _  |,( (_| |, \\___ |,(_____|,";
         char h[]=" _     ,| |    ,| |__  ,|  _ \\ ,| | | |,|_| |_|,       ,";
         char j[]="   _ ,  (_),   _ ,  | |,  | |, _| |,(__/ ,";
         char i[]=" _ ,(_), _ ,| |,| |,|_|,   ,";
         char k[]=" _     ,| |    ,| |  _ ,| |_/ ),|  _ ( ,|_| \\_),       ,";         
                   
         switch(lett[0])
         {
         
            case 97:   
                 pro(a); 
                 break;
            
            case 98:
                 pro (b);
                 break;   
            case 99:
                 pro (c);
                 break;   
            case 100:
                 pro (d);
                 break;
            case 101:
                 pro (e);
                 break;
            case 102:
                 pro (f);
                 break;
            case 103:
                 pro (g);
                 break; 
            case 104:
                 pro (h);
                 break; 
            case 105:
                 pro (i);
                 break; 
            case 106:
                 pro (j);
                 break; 
            case 107:
                 pro (k);
                 break; 
         };               
    
    
    }else if(lett[0]>=108 && lett[0]<=118){
          
                char l[]=" _  ,| | ,| | ,| | ,| | , \\_),    ,";  
                char m[]="       ,       , ____  ,|    \\ ,| | | |,|_|_|_|,       ,";  
                char n[]="       ,       , ____  ,|  _ \\\ ,| | | |,|_| |_|,       ,";
                char o[]="       ,       ,  ___  , / _ \\ ,| |_| |, \\___/ ,       ,";
                char p[]="       ,       , ____  ,|  _ \\\ ,| |_| |,|  __/ ,|_|    ,";
                char q[]="       ,       ,  ____ , / _  |,| |_| |, \\__  |,    |_|,";
                char r[]="       ,       ,  ____ , / ___),| |    ,|_|    ,       ,";
                char s[]="      ,      ,  ___ , /___),|___ |,(___/ ,      ,";      
                char t[]="       ,   _   , _| |_ ,(_   _),  | |_ ,   \\__),       ,";
                char u[]="       ,       , _   _ ,| | | |,| |_| |,|____/ ,       ,";
                char v[]="       ,       , _   _ ,| | | |, \\ V / ,  \\_/  ,       ,";
                   
           switch(lett[0])
           {
                
                case 108:   
                     pro(l); 
                     break;
                case 109:   
                     pro(m); 
                     break;
                case 110:   
                     pro(n); 
                     break;
                case 111:   
                     pro(o); 
                     break; 
                case 112:   
                     pro(p); 
                     break; 
                case 113:   
                     pro(q); 
                     break; 
                case 114:   
                     pro(r); 
                     break; 
                case 115:   
                     pro(s); 
                     break;
                case 116:   
                     pro(t); 
                     break;
                case 117:   
                     pro(u); 
                     break;
                case 118:   
                     pro(v); 
                     break;
                 
           };
    }else{
    
          char w[]="       ,       , _ _ _ ,| | | |,| | | |, \\___/ ,       ,";  
          char x[]="       ,       , _   _ ,( \\ / ), ) X ( ,(_/ \\_),       ,";
          char y[]="       ,       , _   _ ,| | | |,| |_| |, \\__  |,(____/ ,";
          char z[]="       ,       , _____ ,(___  ), / __/ ,(_____),       ,";
          char space[]="       ,       ,       ,       ,       ,       ,       ,";
          
          switch(lett[0])
           {
                
                case 119:   
                     pro(w); 
                     break;
                case 120:   
                     pro(x); 
                     break;
                case 121:   
                     pro(y); 
                     break;
                case 32:   
                     pro(space); 
                     break;
           };
              
    }
    
        
  } 
    
    normaltext(char strin[]){    
    int len =strlen(strin); 
    int count=0;
    char letters[len];
    char * pch;

     int prird=7;
     lines=1;
     while(lines<=prird) {
                         
             char string4[30];
             count=0;
             char *strinp=strin;
             
                   while(count<len){

                        memcpy(string4,strinp, 1);
            	        string4[1] = '\0';
                        *strinp++;
                        let(string4);
    
                        count++;
                     }
         printf("\n");
         lines++;
    }
        
}
       


