#include <cstring>  /* strcmp */
#include <iostream> /* coutm cin*/
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <cstdlib>  /* srand, rand, abs */

using namespace std;

#include "lib/utility.h"
#include "models/Node.h"
#include "models/Arc2.h"
#include "models/Ising2d.h"
#include "algorithms/SimulatedAnnealing.h"
#include "models/Ising2dTransverse.h"
#include "algorithms/SantoroTosattiMartonak.h"
#include "algorithms/SwendsenWang.h"
#include "algorithms/RiegerKawashimaContinuous.h"
#include "algorithms/RiegerKawashimaDiscrete.h"
