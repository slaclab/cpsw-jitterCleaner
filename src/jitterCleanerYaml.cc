#include <cpsw_api_builder.h>
#include <cpsw_api_user.h>

#include <jitterCleanerYaml.hh>

#include <stdio.h>
#include <string.h>

using namespace JitterCleaner;

JitterCleanerYaml::JitterCleanerYaml(Path phase_lock_path, Path Si5317a_path)
{
    _phase_lock_path = phase_lock_path;
    _Si5317a_path    = Si5317a_path;

    _phaseTarget = IScalVal   ::create(_phase_lock_path->findByName("PhaseTarget"));
    _delayValue  = IScalVal_RO::create(_phase_lock_path->findByName("DelayValue"));
    _locked      = IScalVal_RO::create(_phase_lock_path->findByName("Locked"));
    _phaseValid  = IScalVal_RO::create(_phase_lock_path->findByName("PhaseValid"));
    _phaseCount  = IScalVal_RO::create(_phase_lock_path->findByName("PhaseCount"));
    _scanState   = IScalVal_RO::create(_phase_lock_path->findByName("ScanState"));
    _delaySet    = IScalVal_RO::create(_phase_lock_path->findByName("DelaySet"));
    _scanCount   = IScalVal_RO::create(_phase_lock_path->findByName("ScanCount"));
    _phaseCenter = IScalVal_RO::create(_phase_lock_path->findByName("PhaseCenter"));
    _phaseCalc   = IScalVal_RO::create(_phase_lock_path->findByName("PhaseCalc"));
    _reScan      = IScalVal  ::create(_phase_lock_path->findByName("Rescan"));


    _cntLos      = IScalVal_RO::create(_Si5317a_path->findByName("cntLos"));
    _cntLol      = IScalVal_RO::create(_Si5317a_path->findByName("cntLol"));
    _cntLocked   = IScalVal_RO::create(_Si5317a_path->findByName("cntLocked"));

   
}


void JitterCleanerYaml::setPhaseTarget(uint32_t target)
{
    _phaseTarget->setVal(&target);
}

void JitterCleanerYaml::setReScan(uint32_t rescan)
{
    _reScan->setVal(&rescan);
}

uint32_t JitterCleanerYaml::phaseTarget(void)
{
    uint32_t       val;
    IndexRange     rng(0);

    _phaseTarget->getVal(&val, 1, &rng);

    return val;
}

uint32_t JitterCleanerYaml::delayValue(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _delayValue->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::locked(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _locked->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::phaseValid(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _phaseValid->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::phaseCount(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _phaseCount->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::scanState(void)
{

    uint32_t        val;
    IndexRange      rng(0);

    _scanState->getVal(&val, 1, &rng);

    return val;

}


uint32_t JitterCleanerYaml::delaySet(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _delaySet->getVal(&val, 1, &rng);

    return val;
}

uint32_t JitterCleanerYaml::scanCount(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _scanCount->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::phaseCenter(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _phaseCenter->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::phaseCalc(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _phaseCalc->getVal(&val, 1, &rng);

    return val;
}



uint32_t JitterCleanerYaml::reScan(void)
{
    uint32_t         val;
    IndexRange       rng(0);


    _reScan->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::cntLos(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _cntLos->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::cntLol(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _cntLol->getVal(&val, 1, &rng);

    return val;
}


uint32_t JitterCleanerYaml::cntLocked(void)
{
    uint32_t        val;
    IndexRange      rng(0);

    _cntLocked->getVal(&val, 1, &rng);

    return val;
}
