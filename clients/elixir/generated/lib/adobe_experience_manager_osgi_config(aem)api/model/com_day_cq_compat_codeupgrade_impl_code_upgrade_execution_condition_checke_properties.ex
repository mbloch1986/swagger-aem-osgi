# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"codeupgradetasks",
    :"codeupgradetaskfilters"
  ]

  @type t :: %__MODULE__{
    :"codeupgradetasks" => ConfigNodePropertyArray,
    :"codeupgradetaskfilters" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"codeupgradetasks", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"codeupgradetaskfilters", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

