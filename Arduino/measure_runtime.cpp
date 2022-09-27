////////////////////////////////////////////////////////////////////////
long t_start = millis();

// CODE THE RUNTIME WILL BE MEASURED BELOW

    //HERE

// CODE THE RUNTIME WILL BE MEASURED ABOVE


long t_end = millis();
sprintf(GL.print_buffer, "Code takes %d ms!",(t_end -t_start));
Serial.print(GL.print_buffer);
////////////////////////////////////////////////////////////////////////
