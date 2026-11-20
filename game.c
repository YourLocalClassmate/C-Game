
#include <stdio.h>

int main()
{
    int op1;
    printf("You wake up at 3 AM to a tapping at your window. Outside, there's a thick fog and a tall, faceless man in a suit. He is holding a family picture with your face scratched out.\n");
    printf("What would you do? Open the window to confront him (0) or hide under the bed(1):");
    scanf("%d",&op1);
    
    if (op1 == 0){
        int a1;
        printf("You opened your window. Now, what would you do?\n");
        printf("Ask what he wants (0), Throw salt at him (1) : ");
        scanf("%d",&a1);
        
        if (a1 == 0){ //Asks
            int a2;
            printf("He whispers, he is here to collect your grandfather's debt. \n");
            printf("Run (0), Hit (1)");
            scanf("%d",&a2);
            if (a2 == 0){ //run
                printf("You ran as fast as you can. You eventually reached your grandfather in the living room. Your grandfather said \"We'll be alright kiddo\" as his body slowly fades away until there nothing left.");
                return 0;
            } else if (a2 == 1){ //hit
                printf("All of your memories vanishes instantly. You forget who you are as you wander through an infinitely pitch black void untl the rest of your days.");
                return 0;
            }
        }else if (a1 == 1){ //throw salt
            printf("You threw salt at him you got from your grandfather he always put in your room for \"emergencies\" and it dissolves into pitch black, tar-like liquid.");
            return 0;
        }
    }else if (op1 == 1){
        int b2;
        printf("You hid. The figure got into the room by turning into a viscous puddle and slipped through the crack in the window.\n");
        printf("Call the emergency services (0), Hold your breath and make no sound(1) : ");
        scanf("%d",&b2);
        if (b2 == 0){
            printf("You call the emergency services. The phone beeps. 1...\n 2...\n 3...\n but no one answered. The figure peeked under the bed and you blacked out.");
        }else if (b2 == 1){
            printf("You keep hiding, the figure had been searching throughout the house. About a minute later, you can hear a scream of your grandfather and both the figure and your grandfather is gone.");
        }
    }else{
        printf("You just lay on your bed. Little did you know, you can never wake up.");
        return 0;
    }

    return 0;
}
