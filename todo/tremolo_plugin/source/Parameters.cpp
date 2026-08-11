
namespace tremolo {

namespace {
  juce::AudioParameterFloat& crateModulationRateParameter(juce::AudioProcessor& processor) {
    constexpr auto versionHint = 1;
    auto parameter = std::make_unique<juce::AudioParameterFloat>(
      juce::ParameterID {"modulation.rate", versionHint },
      "Modulation Rate",
      juce::NormalisableRange<float> { 0.1f, 20.f, 0.01f, 0.4f },
      5.0f,
      juce::AudioParameterFloatAttributes().withLabel("Hz")
    );
    auto& parameterReference = *parameter;
    processor.addParameter(parameter.release());
    return parameterReference;
  }
}

Parameters::Parameters(juce::AudioProcessor& processor) : rate { crateModulationRateParameter(processor) }

// TODO: create parameters
// TODO: retrieve references to parameters
// TODO: add parameters to the processor
{
  
}
}  // namespace tremolo
