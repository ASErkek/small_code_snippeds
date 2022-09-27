void task_template( void * parameter )
{
	//ENTER
    int freq 			=  10; //Hz - ENTER
    String task_name 	= "Template Task";

    //DONT CHANGE
    int period = (1000 / freq);    //period
    long t_start = 0;
    long t_end = 0;
    char print_buffer[64];

	for (;;)
	{
		t_start = millis();

		//ＴASK CODE BELOW

		//HERE

		//ＴASK CODE ABOVE

		t_end = millis();
		if((t_end -t_start) > period && (t_end - t_start) > 0)
		{
			sprintf(print_buffer, "%s takes %d ms! [Max: %d ms]",task_name, (t_end -t_start), period);
			Serial.println(print_buffer);
		}
		else
		{
			vTaskDelay(period - (t_end -t_start) / portTICK_PERIOD_MS);
		}
	}
}