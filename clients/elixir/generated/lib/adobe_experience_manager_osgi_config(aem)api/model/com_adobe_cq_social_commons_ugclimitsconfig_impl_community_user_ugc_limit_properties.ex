# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUgcLimitProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"enable",
    :"UGCLimit",
    :"ugcLimitDuration",
    :"domains",
    :"toList"
  ]

  @type t :: %__MODULE__{
    :"enable" => ConfigNodePropertyBoolean,
    :"UGCLimit" => ConfigNodePropertyInteger,
    :"ugcLimitDuration" => ConfigNodePropertyInteger,
    :"domains" => ConfigNodePropertyArray,
    :"toList" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUgcLimitProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"enable", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"UGCLimit", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"ugcLimitDuration", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"domains", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"toList", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

