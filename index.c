#include<stdio.h>
#include<math.h>

struct car{char *make ; char *model ; int year ; float xc ; float yc ; float zc;};

int main(){
    
    struct car car_1;
    car_1.make = "Hyundai";
    car_1.model = "i20";
    car_1.year = 2022;
   // float car_1.xc ,car_1.yc,car_1.zc ;
    float vx_1,vy_1,vz_1;
    float ax_1,ay_1,az_1;
    car_1.xc = 0;
    car_1.yc = 0;
    car_1.zc = 0;
    vx_1 = 1;
    vy_1 = 2;
    vz_1 = 3;
    ax_1 = 0;
    ay_1 = 0;
    az_1 = 0;
    vx_1 += ax_1;
    vy_1 += ay_1;
    vz_1 += az_1;
    
    
     struct car car_2;
    car_2.make = "Maruti Suzuki";
    car_2.model = "Swift";
   car_2.year = 2019;
   // float car_1.xc ,car_1.yc,car_1.zc ;
    float vx_2,vy_2,vz_2;
    float ax_2,ay_2,az_2;
    car_2.xc = 2;
    car_2.yc = 4;
    car_2.zc = 6;
    vx_2 = -1;
    vy_2 = -2;
    vz_2 = -3;
    ax_2 = 0;
    ay_2 = 0;
    az_2 = 0;
    vx_2 += ax_2;
    vy_2 += ay_2;
    vz_2 += az_2;
     
     
    int x = fabs(car_1.xc-car_2.xc);
    int y = fabs(car_1.yc-car_2.yc);
    int z = fabs(car_1.zc-car_2.zc);
     
    int vx = fabs(vx_1-vx_2);
    int vy = fabs(vy_1-vy_2);
    int vz = fabs(vz_1-vz_2);
    
    float t1 = 0;
    float t2 =0;
    float t3 =0;
    
    
    printf("2 cars detected :");
    printf("\n");
    printf("Hyundai i20 is my first car manufactured in 2022.");
    printf("\n");
     printf("Maruti Suzuki Swift is second car whose manufacturing year is 2019.");
     printf("\n");
    
    if(car_1.xc == car_2.xc && car_1.yc != car_2.yc && car_1.zc !=car_2.zc){
        if(vx != 0){
            printf("The collision will not occur. You are safe.");
        }
        else{
            if(car_2.yc > car_1.yc){
                vy = vy_2-vy_1;
                if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else {
                     t2 = y/(fabs(vy));
                    if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    if(t2 != t3)printf("The collision will not occur. You are safe.");
                    else {
                        printf("The cars will collide.");
                    printf("Collision will occur at %0.2f hours",t2);
                            printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    }
                    }
                    else{
                      vy = vy_1-vy_2;
                if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else {
                     t2 = y/(fabs(vy));
                    if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    if(t2 != t3)printf("The collision will not occur. You are safe.");
                    else {
                        printf("The cars will collide.");
                        printf("\n");
                    printf("Collision will occur at %0.2f hours",t2);
                            printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    }
                    }   
                    
                      }
            }









   
   
   
  else if(car_1.yc == car_2.yc && car_1.xc != car_2.xc && car_1.zc !=car_2.zc){
        if(vy != 0){
            printf("The collision will not occur. You are safe.");
        }
        else{
            if(car_2.xc > car_1.xc){
                vx = vx_2-vx_1;
                if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else {
                     t1 = x/(fabs(vx));
                    if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    if(t1 != t3)printf("The collision will not occur. You are safe.");
                    else {
                        printf("The cars will collide.");
                    printf("Collision will occur at %0.2f hours",t1);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    }
                    }
                    else{
                      vx = vx_1-vx_2;
                if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else {
                     t1 = x/(fabs(vx));
                    if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    if(t1 != t3)printf("The collision will not occur. You are safe.");
                    else {
                        printf("The cars will collide.");
                        printf("\n");
                    printf("Collision will occur at %0.2f hours",t1);
                     printf("\n");
     if(fabs(vx>=15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    }
                    }   
                    
                      }
            }
            
            
            
            
            
          else  if(car_1.zc == car_2.zc && car_1.yc != car_2.yc && car_1.xc !=car_2.xc){
        if(vz != 0){
            printf("The collision will not occur. You are safe.");
        }
        else{
            if(car_2.yc > car_1.yc){
                vy = vy_2-vy_1;
                if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else {
                     t2 = y/(fabs(vy));
                    if(car_2.xc > car_1.xc){
                        vx = vx_2 - vx_1;
                       if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t1 = x/(fabs(vx));
                }
                    }
                    else {
                         vx = vx_1 - vx_2;
                       if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t1 = x/(fabs(vx));
                }
                    }
                    if(t2 != t1)printf("The collision will not occur. You are safe.");
                    else {
                        printf("The cars will collide.");
                    printf("Collision will occur at %0.2f hours",t2);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    }
                    }
                    else{
                      vy = vy_1-vy_2;
                if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else {
                     t2 = y/(fabs(vy));
                    if(car_2.xc > car_1.xc){
                        vx = vx_2 - vx_1;
                       if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t1 = x/(fabs(vx));
                }
                    }
                    else {
                         vx = vx_1 - vx_2;
                       if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t1 = x/(fabs(vx));
                }
                    }
                    if(t2 != t1)printf("The collision will not occur. You are safe.");
                    else {
                        printf("The cars will collide.");
                        printf("\n");
                    printf("Collision will occur at %0.2f hours",t2);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    }
                    }   
                    
                      }
            }
   
   
   
   
   
   
   
   
   
   
      else if(car_1.xc == car_2.xc && car_1.yc == car_2.yc && car_1.zc != car_2.zc){
          if(vx != 0){
              printf("The collision will not occur.");
              printf("\n");
              printf("You are safe.");
          }
          else{
              if(vy != 0){
              printf("The collision will not occur.");
              printf("\n");
              printf("You are safe.");
          }
          else{
               if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                     printf("The cars will collide.");
                     printf("\n");
                    printf("Collision will occur at %0.2f hours",t3);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                     }
          }
          
      }
      
      
      
      
      else if(car_1.zc == car_2.zc && car_1.yc == car_2.yc && car_1.xc != car_2.xc){
          if(vz != 0){
              printf("The collision will not occur.");
              printf("\n");
              printf("You are safe.");
          }
          else{
              if(vy != 0){
              printf("The collision will not occur.");
              printf("\n");
              printf("You are safe.");
          }
          else{
               if(car_2.xc > car_1.xc){
                        vx = vx_2 - vx_1;
                       if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t1 = x/(fabs(vx));
                }
                    }
                    else {
                         vx = vx_1 - vx_2;
                       if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t1 = x/(fabs(vx));
                }
                    }
                    
                     printf("The cars will collide.");
                     printf("\n");
                    printf("Collision will occur at %0.2f hours",t1);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                     }
          }
          
      } 
      
      
      
     else if(car_1.xc == car_2.xc && car_1.zc == car_2.zc && car_1.yc != car_2.yc){
          if(vx != 0){
              printf("The collision will not occur.");
              printf("\n");
              printf("You are safe.");
          }
          else{
              if(vz != 0){
              printf("The collision will not occur.");
              printf("\n");
              printf("You are safe.");
          }
          else{
               if(car_2.yc > car_1.yc){
                        vy = vy_2 - vy_1;
                       if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t2 = y/(fabs(vy));
                }
                    }
                    else {
                         vy = vy_1 - vy_2;
                       if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t2 = y/(fabs(vy));
                }
                    }
                    
                     printf("The cars will collide.");
                     printf("\n");
                    printf("Collision will occur at %0.2f hours",t2);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                     }
          }
          
      }
      
      
      
      
    else if(car_1.xc != car_2.xc && car_1.yc!= car_2.yc && car_1.zc!= car_2.zc){
        
        
        if(car_2.xc > car_1.xc){
                        vx = vx_2 - vx_1;
                       if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t1 = x/(fabs(vx));
                     
                     
                      if(car_2.yc > car_1.yc){
                        vy = vy_2 - vy_1;
                       if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t2 = y/(fabs(vy));
                     
                     
                     if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                     else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                    if(t1 == t2 && t2 == t3 && t3 == t1){
                         printf("The cars will collide.");
                     printf("\n");
                    printf("Collision will occur at %0.2f hours",t2);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    
                    else {
                         printf("The collision will not occur. You are safe.");
                    }
                     
                     
                     
                       }
                    }
                    
                    
                    
                    
                else {
                     vy = vy_1 - vy_2;
                       if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t2 = y/(fabs(vy));
                     
                     
                     if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                     else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                    if(t1 == t2 && t2 == t3 && t3 == t1){
                         printf("The cars will collide.");
                     printf("\n");
                    printf("Collision will occur at %0.2f hours",t2);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    
                    else {
                         printf("The collision will not occur. You are safe.");
                    }
                     
                     
                     
                       }
                }    
                      }
                    }
             else {
                vx = vx_1 - vx_2;
                       if(vx >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t1 = x/(fabs(vx));
                     
                     
                      if(car_2.yc > car_1.yc){
                        vy = vy_2 - vy_1;
                       if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t2 = y/(fabs(vy));
                     
                     
                     if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                     else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                    if(t1 == t2 && t2 == t3 && t3 == t1){
                         printf("The cars will collide.");
                     printf("\n");
                    printf("Collision will occur at %0.2f hours",t2);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    
                    else {
                         printf("The collision will not occur. You are safe.");
                    }
                        }
                    }
                      else {
                     vy = vy_1 - vy_2;
                       if(vy >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t2 = y/(fabs(vy));
                     
                     
                     if(car_2.zc > car_1.zc){
                        vz = vz_2 - vz_1;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                     else {
                         vz = vz_1 - vz_2;
                       if(vz >= 0){
                     printf("The collision will not occur. You are safe.");
                }
                else{
                     t3 = z/(fabs(vz));
                }
                    }
                    
                    if(t1 == t2 && t2 == t3 && t3 == t1){
                         printf("The cars will collide.");
                     printf("\n");
                    printf("Collision will occur at %0.2f hours",t2);
                     printf("\n");
     if(fabs(vx >= 15||vy >= 15||vz >= 15)){
         printf("Hope you will be hospitalised as earlier as possible after your accident");
     }   
     else{
         printf("Its good to have an insurance of your car...");
     }
                    }
                    
                    else {
                         printf("The collision will not occur. You are safe.");
                    }
                   }
                }    
           }    
        }          
     }  
       else {
         printf("The cars are at same position at start.");
          } 
         
     
     
     
      return 0;
}
