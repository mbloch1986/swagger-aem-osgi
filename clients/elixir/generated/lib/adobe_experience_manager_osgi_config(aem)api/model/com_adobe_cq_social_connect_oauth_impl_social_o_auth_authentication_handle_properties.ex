# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"path",
    :"service.ranking"
  ]

  @type t :: %__MODULE__{
    :"path" => ConfigNodePropertyArray,
    :"service.ranking" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"path", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"service.ranking", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end

