/*
 * Copyright (c) 2015-2016 Intel, Inc.  All rights reserved.
 *
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#ifndef PMIX_PNET_OPA_H
#define PMIX_PNET_OPA_H

#include <src/include/pmix_config.h>


#include "src/mca/pnet/pnet.h"

BEGIN_C_DECLS

/* the component must be visible data for the linker to find it */
PMIX_EXPORT extern pmix_pnet_base_component_t mca_pnet_opa_component;
extern pmix_pnet_module_t pmix_opa_module;

/* define a key for any blob we need to send in a launch msg */
#define PMIX_PNET_OPA_BLOB  "pmix.pnet.opa.blob"

END_C_DECLS

#endif