/*  Boolector: Satisfiablity Modulo Theories (SMT) solver.
 *
 *  Copyright (C) 2016 Mathias Preiner.
 *
 *  All rights reserved.
 *
 *  This file is part of Boolector.
 *  See COPYING for more information on using this software.
 */

#ifndef BTORSYNTHFUN_H_INCLUDED
#define BTORSYNTHFUN_H_INCLUDED

#include <stdint.h>
#include "btortypes.h"
#include "utils/btorhashptr.h"

BtorNode* btor_synthesize_fun (Btor* btor,
                               BtorNode* uf,
                               const BtorPtrHashTable* model,
                               BtorNode* prev_synth_fun,
                               BtorPtrHashTable* additional_inputs,
                               BtorNode** best_match,
                               uint32_t limit,
                               uint32_t max_level);

#endif