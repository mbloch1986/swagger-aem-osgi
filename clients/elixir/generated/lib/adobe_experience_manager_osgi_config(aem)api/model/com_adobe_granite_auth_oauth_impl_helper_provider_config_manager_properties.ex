# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"oauth.cookie.login.timeout",
    :"oauth.cookie.max.age"
  ]

  @type t :: %__MODULE__{
    :"oauth.cookie.login.timeout" => ConfigNodePropertyString,
    :"oauth.cookie.max.age" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"oauth.cookie.login.timeout", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"oauth.cookie.max.age", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
