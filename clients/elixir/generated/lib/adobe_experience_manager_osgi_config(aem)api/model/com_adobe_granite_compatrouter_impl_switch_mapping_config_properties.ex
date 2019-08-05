# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"group",
    :"ids"
  ]

  @type t :: %__MODULE__{
    :"group" => ConfigNodePropertyString,
    :"ids" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"group", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"ids", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end
