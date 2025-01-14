# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"translate.language",
    :"translate.display",
    :"translate.attribution",
    :"translate.caching",
    :"translate.smart.rendering",
    :"translate.caching.duration",
    :"translate.session.save.interval",
    :"translate.session.save.batchLimit"
  ]

  @type t :: %__MODULE__{
    :"translate.language" => ConfigNodePropertyDropDown,
    :"translate.display" => ConfigNodePropertyDropDown,
    :"translate.attribution" => ConfigNodePropertyBoolean,
    :"translate.caching" => ConfigNodePropertyDropDown,
    :"translate.smart.rendering" => ConfigNodePropertyDropDown,
    :"translate.caching.duration" => ConfigNodePropertyString,
    :"translate.session.save.interval" => ConfigNodePropertyString,
    :"translate.session.save.batchLimit" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"translate.language", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyDropDown, options)
    |> deserialize(:"translate.display", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyDropDown, options)
    |> deserialize(:"translate.attribution", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"translate.caching", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyDropDown, options)
    |> deserialize(:"translate.smart.rendering", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyDropDown, options)
    |> deserialize(:"translate.caching.duration", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"translate.session.save.interval", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"translate.session.save.batchLimit", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

