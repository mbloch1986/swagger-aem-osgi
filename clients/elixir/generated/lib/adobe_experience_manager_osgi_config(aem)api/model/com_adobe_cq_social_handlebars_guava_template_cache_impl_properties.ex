# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"parameter.guava.cache.enabled",
    :"parameter.guava.cache.params",
    :"parameter.guava.cache.reload",
    :"service.ranking"
  ]

  @type t :: %__MODULE__{
    :"parameter.guava.cache.enabled" => ConfigNodePropertyBoolean,
    :"parameter.guava.cache.params" => ConfigNodePropertyString,
    :"parameter.guava.cache.reload" => ConfigNodePropertyBoolean,
    :"service.ranking" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"parameter.guava.cache.enabled", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"parameter.guava.cache.params", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"parameter.guava.cache.reload", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"service.ranking", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end

