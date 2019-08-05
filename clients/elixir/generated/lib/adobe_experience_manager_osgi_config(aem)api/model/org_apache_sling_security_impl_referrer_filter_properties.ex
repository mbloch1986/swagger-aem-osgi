# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingSecurityImplReferrerFilterProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"allow.empty",
    :"allow.hosts",
    :"allow.hosts.regexp",
    :"filter.methods",
    :"exclude.agents.regexp"
  ]

  @type t :: %__MODULE__{
    :"allow.empty" => ConfigNodePropertyBoolean,
    :"allow.hosts" => ConfigNodePropertyArray,
    :"allow.hosts.regexp" => ConfigNodePropertyArray,
    :"filter.methods" => ConfigNodePropertyArray,
    :"exclude.agents.regexp" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingSecurityImplReferrerFilterProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"allow.empty", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"allow.hosts", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"allow.hosts.regexp", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"filter.methods", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"exclude.agents.regexp", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end
