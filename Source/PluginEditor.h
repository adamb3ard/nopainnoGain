/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class NopainnoGainAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    NopainnoGainAudioProcessorEditor (NopainnoGainAudioProcessor&);
    ~NopainnoGainAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider gainSlider;
    
    NopainnoGainAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NopainnoGainAudioProcessorEditor)
};
