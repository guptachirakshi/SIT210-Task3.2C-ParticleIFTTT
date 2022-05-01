#define light_sensor =A0;
#define LIGHT_LEVEL_THRESHOLD 800


void setup() {
}
void loop() {
    int dark=random(7,9)*100;
    if(dark>=LIGHT_LEVEL_THRESHOLD)
    {
        Particle.publish("moon"," dark",PRIVATE);
        delay(2000);
    }
    else
    {
        Particle.publish("sun","light",PRIVATE);
        delay(2000);
    }
}