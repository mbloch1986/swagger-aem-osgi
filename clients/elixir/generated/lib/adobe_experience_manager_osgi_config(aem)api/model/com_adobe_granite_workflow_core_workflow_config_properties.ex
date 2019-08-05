# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteWorkflowCoreWorkflowConfigProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"cq.workflow.config.workflow.packages.root.path",
    :"cq.workflow.config.workflow.process.legacy.mode",
    :"cq.workflow.config.allow.locking"
  ]

  @type t :: %__MODULE__{
    :"cq.workflow.config.workflow.packages.root.path" => ConfigNodePropertyArray,
    :"cq.workflow.config.workflow.process.legacy.mode" => ConfigNodePropertyBoolean,
    :"cq.workflow.config.allow.locking" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteWorkflowCoreWorkflowConfigProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"cq.workflow.config.workflow.packages.root.path", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"cq.workflow.config.workflow.process.legacy.mode", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"cq.workflow.config.allow.locking", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end
