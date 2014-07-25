
static void rotate(void)
{

int j=1;
gpio_direction_output(117,1);

while(j>0)
{

//----1
gpio_direction_output(60,1);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(365);

gpio_direction_output(60,1);
gpio_direction_output(48,1);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(365);

gpio_direction_output(60,0);
gpio_direction_output(48,1);
gpio_direction_output(49,0);
gpio_direction_output(115,0);
udelay(365);

gpio_direction_output(60,0);
gpio_direction_output(48,1);
gpio_direction_output(49,1);
gpio_direction_output(115,0);
udelay(365);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,1);
gpio_direction_output(115,0);
udelay(365);

//--------2
gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,1);
gpio_direction_output(115,1);
udelay(365);

gpio_direction_output(60,0);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,1);
udelay(365);

gpio_direction_output(60,1);
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,1);
udelay(365);


j--;

}

gpio_direction_output(117,0);   //  driver disable


gpio_direction_output(60,0);    //  motor lines disable
gpio_direction_output(48,0);
gpio_direction_output(49,0);
gpio_direction_output(115,0);



}

