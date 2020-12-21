#include "slrtappmapping.h"
#include "./maps/SimulinkProjet.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <SimulinkProjet> */
		{ /* SignalMapInfo */
			SimulinkProjet_BIOMAP,
			SimulinkProjet_LBLMAP,
			SimulinkProjet_SIDMAP,
			SimulinkProjet_SBIO,
			SimulinkProjet_SLBL,
			{0,38},
			39,
		},
		{ /* ParamMapInfo */
			SimulinkProjet_PTIDSMAP,
			SimulinkProjet_PTNAMESMAP,
			SimulinkProjet_SPTMAP,
			{0,49},
			50,
		},
		"SimulinkProjet",
		"",
		"SimulinkProjet",
		2,
		SimulinkProjet_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}