# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"flush.agents"
  ]

  @type t :: %__MODULE__{
    :"flush.agents" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqCloudconfigCoreImplConfigurationReplicationEventHandleProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"flush.agents", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

