#include <cpsw_api_builder.h>
#include <cpsw_api_user.h>

#include <jitterCleanerYaml.hh>

#include <stdio.h>
#include <string.h>

using namespace JitterCleaner;

JitterCleanerYaml::JitterCleanerYaml(Path path)
{
    _path = path;

    _phaseTarget = IScalVal   ::create(_path->findByName("PhaseTarget"));
    _delayValue  = IScalVal_RO::create(_path->findByName("DelayValue"));
    _locked      = IScalVal_RO::create(_path->findByName("Locked"));
    _phaseValid  = IScalVal_RO::create(_path->findByName("PhaseValid"));
    _phaseCount  = IScalVal_RO::create(_path->findByName("PhaseCount"));
    _scanState   = IScalVal_RO::create(_path->findByName("ScanState"));
    _delaySet    = IScalVal_RO::create(_path->findByName("DelaySet"));
    _scanCount   = IScalVal_RO::create(_path->findByName("ScanCount"));
    _phaseCenter = IScalVal_RO::create(_path->findByName("PhaseCenter"));
    _phaseCalc   = IScalVal_RO::create(_path->findByName("PhaseCalc"));
    _reScan      = IScalVal  ::create(_path->findByName("Rescan"));

   
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


