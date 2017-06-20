/*
 * Generated by Bluespec Compiler, version 2017.03.beta1 (build 35049, 2017-03-16)
 * 
 * On Sun Jun 18 11:21:19 IST 2017
 * 
 */

/* Generation options: keep-fires */
#ifndef __model_mkJtag_h__
#define __model_mkJtag_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

#include "bs_model.h"
#include "mkJtag.h"

/* Class declaration for a model of mkJtag */
class MODEL_mkJtag : public Model {
 
 /* Top-level module instance */
 private:
  MOD_mkJtag *mkJtag_instance;
 
 /* Handle to the simulation kernel */
 private:
  tSimStateHdl sim_hdl;
 
 /* Constructor */
 public:
  MODEL_mkJtag();
 
 /* Functions required by the kernel */
 public:
  void create_model(tSimStateHdl simHdl, bool master);
  void destroy_model();
  void reset_model(bool asserted);
  void get_version(unsigned int *year,
		   unsigned int *month,
		   char const **annotation,
		   char const **build);
  time_t get_creation_time();
  void * get_instance();
  void dump_state();
  void dump_VCD_defs();
  void dump_VCD(tVCDDumpType dt);
  tUInt64 skip_license_check();
};

/* Function for creating a new model */
extern "C" {
  void * new_MODEL_mkJtag();
}

#endif /* ifndef __model_mkJtag_h__ */