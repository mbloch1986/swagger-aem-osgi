# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.GuideLocalizationServiceProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"supportedLocales",
    :"Localizable Properties"
  ]

  @type t :: %__MODULE__{
    :"supportedLocales" => ConfigNodePropertyArray,
    :"Localizable Properties" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.GuideLocalizationServiceProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"supportedLocales", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"Localizable Properties", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

