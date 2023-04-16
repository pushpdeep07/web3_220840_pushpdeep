# web3_220840_pushpdeep

# web 3.0 task

In this code I have taken two cars (accordingly we can take more cars also) then, I have made the class of these cars which are having attributes as its making, model, year of manufacturing, speed (speed I have taken is like that if the particle is moving in positive direction is taken as positive else negative ), x – coordinate and  y – coordinate.

__Now , the methods I have used in my code are :__

- accelerate :- I have made 3  variable for each car of type float namely ax , ay , az for the acceleration which I have added in the respective speed of the car increases by that amount 

- brake :- if acceleration in any direction is increasing the speed in that direction than acceleration is taken as positive else it is taken as negative (say as brake) and decreases the speed of the car by that amount. 

- move :- This method is used to move the car like say its new coordinate will be old coordinate in that direction + speed in that direction multiply by time.


- detect collision :- In it I have made 8 cases to detect the collision :-
    - Case 1 : if initial x coordinate of each car are equal  whereas y coordinate and z coordinate are not equal the for collision relative speed in x direction must be 0 now we will  find time period for collision each direction if that time will be equal then there wil be collision otherwise not.
    - Case 2 :- if initial y coordinate will be equal but x and z coordinate are not equal then same will be applied as in case 1.
    - Case 3 :-  if initial z coordinate will be equal but x and y coordinate are not equal then same will be applied as in case 1.
    - Case 4 :- if x and y coordinate are equal but z coordinate are not equal then relative speed in x and y direction must be equal for collision.
	- Case 5 :-  if x and z coordinate are equal but y coordinate are not equal then relative speed in x and y direction must be equal for collision.
	- Case 6 :- if y and z coordinate are equal but x coordinate are not equal then relative speed in y and z direction must be equal for collision.
	 - Case 7 :- if none of the coordinates are equal initially then for the collision then for the collision relative distance between them must be decreasing for the collision.
 	 - Case 8 :- if initially both car are at the same positions.

- time for collision :- we can find time in each of the direction given as t1,t2,t3 wherever possible if all the possible time are equal then there will be a collision and that equal time will be the time for collision.


eg-
__input-__

car1-

    car_1.xc = 0;
    car_1.yc = 0;
    car_1.zc = 0;
    vx_1 = 1;
    vy_1 = 2;
    vz_1 = 3;
    ax_1 = 0;
    ay_1 = 0;
    az_1 = 0;

car2-

    car_2.xc = 2;
    car_2.yc = 4;
    car_2.zc = 6;
    vx_2 = -1;
    vy_2 = -2;
    vz_2 = -3;
    ax_2 = 0;
    ay_2 = 0;
    az_2 = 0;

__output__-

    2 cars detected :
    Hyundai i20 is my first car manufactured in 2022.
    Maruti Suzuki Swift is second car whose manufacturing year is 2019.
    The cars will collide.
    Collision will occur at 1.00 hours
    Its good to have an insurance of your car...
