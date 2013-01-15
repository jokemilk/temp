#ifdef _DEBUG_
#define DBG(x)	printk(x)
#elseif
#define DBG(x)
#endif

switch (cmd)
{

	case PUMP_RESET:
	{
		Buzzer_Stop();
		Auto_zero();
		default_global_values(dev);
	}
		break;
	case PUMP_START_T1:
		rTCON |= S3C2410_TCON_T1START;
		DBG("start timer_1\n");
		break;
	default:break;
}