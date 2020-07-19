/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NopainnoGainAudioProcessorEditor::NopainnoGainAudioProcessorEditor (NopainnoGainAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    gainSlider.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    gainSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 50, 20);
    gainSlider.setRange(0.0f, 1.0f, 0.01f);
    gainSlider.setValue(0.5f);
    addAndMakeVisible(gainSlider);
    
    setSize (200, 300);
}

NopainnoGainAudioProcessorEditor::~NopainnoGainAudioProcessorEditor()
{
}

//==============================================================================
void NopainnoGainAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("nopainno", 0, 0, 200, 25, juce::Justification::horizontallyCentred, 1);
    g.drawFittedText ("gain", 0, 15, 200, 25, juce::Justification::horizontallyCentred, 1);
}

void NopainnoGainAudioProcessorEditor::resized()
{
    gainSlider.setBounds(getWidth() / 2 - 50, getHeight() / 2 - 75, 100, 150);
}
