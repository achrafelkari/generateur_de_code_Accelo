interface IO:
var MOTOR : boolean
in event master_start
in event master_stop

16
37
org.yakindu.sct.model.sgraph.impl.StatechartImpl@b4bc72 (specification: interface IO:
var MOTOR : boolean
in event master_start
in event master_stop
) (namespace: null, name: default, documentation: null)org.yakindu.sct.model.sgraph.impl.StatechartImpl@b4bc72 (specification: interface IO:
var MOTOR : boolean
in event master_start
in event master_stop
) (namespace: null, name: default, documentation: null)
      Boolean :  MOTOR 
'substring operation'.substring(11, 19)


----------------------------STATE TEST --------------------------


	STATE1
	STATE2


------------------------------- Target Entry Test ---------------------------


	STATE1


--------------------------------Test Specification of state -----------------


	out(MOTOR,false,-1);
	out(MOTOR,true,-1);
--------------------------------------------------TEST DE 3 ETAT -----------------------------------------------


 // generated by acceleo 

  /** Les entree sortie : master_start**/ 
		boolean master_start = false;
		boolean ev_master_start=false;
		boolean prior_master_start = false;
		
		PROGMEM const char s_master_start[] = "master_start";
	
 // generated by acceleo 

  /** Les entree sortie : master_stop**/ 
		boolean master_stop = false;
		boolean ev_master_stop=false;
		boolean prior_master_stop = false;
		
		PROGMEM const char s_master_stop[] = "master_stop";
	

 {
----------------------------------------------------------

 MOTOR : 


   
   
       #define MOTOR 8// l'entree a change !! 
	
   
   
       #define  8// l'entree a change !! 
	


