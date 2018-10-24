#ifndef JITTER_CLEANER_YAML_HH
#define JITTER_CLEANER_YAML_HH

#include <cpsw_api_builder.h>

#include <stdint.h>
#include <vector>

namespace JitterCleaner {

    class JitterCleanerYaml {

        protected:
            Path          _phase_lock_path;
            Path          _Si5317a_path;

            /* registers for phase locker */
            ScalVal       _phaseTarget;
            ScalVal_RO    _delayValue;
            ScalVal_RO    _locked;
            ScalVal_RO    _phaseValid;
            ScalVal_RO    _phaseCount;
            ScalVal_RO    _scanState;
            ScalVal_RO    _delaySet;
            ScalVal_RO    _scanCount;
            ScalVal_RO    _phaseCenter;
            ScalVal_RO    _phaseCalc;
            ScalVal       _reScan;

           /* register for Si5317a */
           ScalVal_RO     _cntLos;
           ScalVal_RO     _cntLol;
           ScalVal_RO     _cntLocked;

        public:
            JitterCleanerYaml(Path phase_lock_path, Path Si5317a_path);
            void        setPhaseTarget(uint32_t target);
            void        setReScan(uint32_t rescan);

            uint32_t     phaseTarget(void);
            uint32_t     delayValue(void);
            uint32_t     locked(void);
            uint32_t     phaseValid(void);
            uint32_t     phaseCount(void);
            uint32_t     scanState(void);
            uint32_t     delaySet(void);
            uint32_t     scanCount(void);
            uint32_t     phaseCenter(void);
            uint32_t     phaseCalc(void);
            uint32_t     reScan(void);

            uint32_t     cntLos(void);
            uint32_t     cntLol(void);
            uint32_t     cntLocked(void);

    };

};

#endif /* JITTER_CLEANER_YAML_HH */
