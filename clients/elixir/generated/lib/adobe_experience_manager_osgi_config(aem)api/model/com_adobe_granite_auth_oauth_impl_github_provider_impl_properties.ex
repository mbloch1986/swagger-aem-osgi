# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteAuthOauthImplGithubProviderImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"oauth.provider.id",
    :"oauth.provider.github.authorization.url",
    :"oauth.provider.github.token.url",
    :"oauth.provider.github.profile.url"
  ]

  @type t :: %__MODULE__{
    :"oauth.provider.id" => ConfigNodePropertyString,
    :"oauth.provider.github.authorization.url" => ConfigNodePropertyString,
    :"oauth.provider.github.token.url" => ConfigNodePropertyString,
    :"oauth.provider.github.profile.url" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteAuthOauthImplGithubProviderImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"oauth.provider.id", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"oauth.provider.github.authorization.url", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"oauth.provider.github.token.url", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"oauth.provider.github.profile.url", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

