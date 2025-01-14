# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"poolSize",
    :"maxPoolSize",
    :"queueSize",
    :"keepAliveTime"
  ]

  @type t :: %__MODULE__{
    :"poolSize" => ConfigNodePropertyInteger,
    :"maxPoolSize" => ConfigNodePropertyInteger,
    :"queueSize" => ConfigNodePropertyInteger,
    :"keepAliveTime" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"poolSize", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"maxPoolSize", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"queueSize", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"keepAliveTime", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end

